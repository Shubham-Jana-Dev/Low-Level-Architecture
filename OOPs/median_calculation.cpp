#include <iostream>
#include <vector>

class statistics{
    private:
    std::vector<int> dataSet;
public:
    statistics() : dataSet({23,34,56,67,78,111,145}){}
    statistics(std::vector <int> array) : dataSet(std::move(array)) {}

    const std::vector<int>& getDataSet() const {return dataSet;}
    void setDataSet(const std::vector<int>& myArray) {dataSet = myArray;}
    std::vector <int> sortData(){
            int temp = 0;
            for(int i = 0; i < dataSet.size(); i++){
                for (int j = i+1; j < dataSet.size(); j++){
                    if(dataSet[i]>dataSet[j]){
                        temp = dataSet[i];
                        dataSet[i] = dataSet[j];
                        dataSet[j] = temp;
                    }
                }
            }
            return dataSet;
    }
    double median_cal(){
        sortData();
        if(dataSet.empty()){
            return 0;
        }
        else if((dataSet.size())%2 != 0){
            int midile = (dataSet.size())/2;
            std::cout << "The midile element of the data set is: " << dataSet[midile] << std::endl;
            return dataSet[midile];
        }else{
            int midile = (dataSet.size())/2;
            std::cout << "The midile elements of the data set are: " << dataSet[midile-1] << " and "<<dataSet[midile] << std::endl;
            return (dataSet[midile - 1] + dataSet[midile])/2.0; 
        }
    }
};
int main(){
    statistics s1;
    double midileElement = s1.median_cal();
    std::cout<<" median: " << midileElement <<"\n"<< std::endl;
    statistics s2({34,45,67,87});
    double midile2 = s2.median_cal();
    std::cout<<" [34,45,67,87] median: " << midile2 << "\n" << std::endl;

    statistics s3({12,5,8,20,15});
    double midile3 = s3.median_cal();
    std::cout<<" [12,5,8,20,15] median: " << midile3 << "\n" << std::endl;

    statistics s4({100,20,50,80,30,40});
    double midile4 = s4.median_cal();
    std::cout<<" [100,20,50,80,30,40] median: " << midile4 << "\n" << std::endl;

    statistics s5({7,2,9,1,5});
    double midile5 = s5.median_cal();
    std::cout<<" [7,2,9,1,5] median: " << midile5 << "\n"<< std::endl;

    statistics s6({10,5,10,3,8,5});
    double midile6 = s6.median_cal();
    std::cout<<" [10,5,10,3,8,5] median: " << midile6 <<"\n"<< std::endl;

    return 0;
}