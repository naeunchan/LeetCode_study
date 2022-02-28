const lemonadeChange = (bills) => {
    const money = [0, 0, 0];
    
    for(const bill of bills){
        if(bill === 5){
            money[0]++;
        } else if(bill === 10){
            if(money[0] === 0){
                return false;
            }
            
            money[1]++;
            money[0]--;
        } else if(bill === 20){
            if(money[0] >= 1 && money[1] >= 1){
                money[0]--;
                money[1]--;
                money[2]++;
            } else if(money[0] >= 3){
                money[0] -= 3;
                money[2]++;
            } else{
                return false;
            }
        }
    }
    
    return true;
};