class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& min_wage, int k) {
        int n=quality.size();

        double result=DBL_MAX;

        vector<pair<double,int>>worker_ratio(n);
        for(int worker=0;worker<n;worker++){
            worker_ratio[worker]=make_pair((double)min_wage[worker]/quality[worker],quality[worker]);
        }

        sort(worker_ratio.begin(),worker_ratio.end());
        int sum_quality=0;
        priority_queue<int>pq;
        for(int i=0;i<k;i++){
            sum_quality+=worker_ratio[i].second;
            pq.push(worker_ratio[i].second);
        }
        double managerRatio=worker_ratio[k-1].first;
        result=managerRatio*sum_quality;
        for(int manager=k;manager<n;manager++){
            pq.push(worker_ratio[manager].second);
            sum_quality+=worker_ratio[manager].second;
            if(pq.size()>k){
                sum_quality-=pq.top();
                pq.pop();
            }
            managerRatio=worker_ratio[manager].first;
            result = min(result,managerRatio*sum_quality);
        }
        return result;
    }
};
