#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string ht[12], aw[12];
        int hg[12], ag[12];
        string vs;
        string tn[4];
        int tp[4]={0, 0, 0, 0};
        int gd[4]={0, 0, 0, 0};
        int countt=0;
        for(int i=0; i<12; i++)
        {
            cin >> ht[i] >> hg[i] >> vs >> ag[i] >> aw[i];
            //cout << ht[i] << hg[i] << vs << ag[i] << aw[i];
            if(i==0)
            {
                tn[0]=ht[0];
                tn[1]=aw[0];
                countt=countt+2;
                if(hg[0]>ag[0])
                {
                    tp[0]=3;
                    tp[1]=0;
                    gd[0]=hg[0]-ag[0];
                    gd[1]=ag[0]-hg[0];
                }

                else if(hg[0]<ag[0])
                {
                    tp[0]=0;
                    tp[1]=3;
                    gd[0]=hg[0]-ag[0];
                    gd[1]=ag[0]-hg[0];
                }

                else
                {
                    tp[0]=1;
                    tp[1]=1;
                    gd[0]=hg[0]-ag[0];
                    gd[1]=ag[0]-hg[0];
                }
            }
            else
            {
                int k, z;
                for(int j=0; j<countt; j++)
                {
                    if(tn[j]==ht[i])
                    {
                      k=j;
                      break;
                    }
                    else
                    {
                        k=countt;
                    }
                }
                if(k==countt)
                {
                    countt++;
                    tn[k]=ht[i];
                }
                for(int j=0; j<countt; j++)
                {
                    if(tn[j]==aw[i])
                    {
                      z=j;
                      break;
                    }
                    else
                    {
                        z=countt;
                    }
                }
                if(z==countt)
                {
                    countt++;
                    tn[z]=aw[i];
                }
                if(hg[i]>ag[i])
                {
                    tp[k]=tp[k]+3;
                    tp[z]=tp[z]+0;
                    gd[k]=gd[k]+(hg[i]-ag[i]);
                    gd[z]=gd[z]+(ag[i]-hg[i]);
                }
                else if(hg[i]<ag[i])
                {
                    tp[k]=tp[k]+0;
                    tp[z]=tp[z]+3;
                    gd[k]=gd[k]+(hg[i]-ag[i]);
                    gd[z]=gd[z]+(ag[i]-hg[i]);
                }
                else
                {
                    tp[k]=tp[k]+1;
                    tp[z]=tp[z]+1;
                    gd[k]=gd[k]+(hg[i]-ag[i]);
                    gd[z]=gd[z]+(ag[i]-hg[i]);
                }
            }
            }

            int max1=tp[0], maxgd=gd[0];
            int ind1=0;
            for(int h=0; h<4; h++)
            {
                if(tp[h]>max1)
                {
                    max1=tp[h];
                    ind1=h;
                    maxgd=gd[h];
                }
                else if(tp[h]=max1)
                {
                    if(gd[h]>maxgd)
                    {
                        max1=tp[h];
                        ind1=h;
                        maxgd=gd[h];
                    }
                }
            }
            int max2=0, ind2=9, maxgd2=0;
            if(ind1==0)
            {
                max2=tp[1];
                ind2=1;
                maxgd2=gd[1];
            }
            else
            {
                max2=tp[0];
                ind2=0;
                maxgd2=gd[0];
            }
            for(int h=0; h<4; h++)
            {
                if(h==ind1)
                {
                    continue;
                }
                else
                {
                   if(tp[h]>max2)
                {
                    max2=tp[h];
                    ind2=h;
                    maxgd2=gd[h];
                }
                else if(tp[h]=max2)
                {
                    if(gd[h]>maxgd2)
                    {
                        max2=tp[h];
                        ind2=h;
                        maxgd2=gd[h];
                    }
                }
                }
            }
            cout << tn[ind1] << " " << tn[ind2] << endl;
        }
     return 0;
    }
