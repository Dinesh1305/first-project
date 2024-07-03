class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> a;
        int t=0;
        for(int i=left;i<=right;i++)
        {
            int p=i;
            t=1;
            while(p!=0)
            {
                int r=p%10;
                if(r==0)
                {
                    t=0;
                    break;
                }
                if(i%r!=0)
                {
                    t=0;
                    break;
                }
                
                p=p/10;
            }
            if(t==1)
            {
            a.push_back(i);
            }


        }

        return a;
    }
};
