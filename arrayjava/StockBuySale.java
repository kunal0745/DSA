package arrayjava;

public class StockBuySale {
    public static int profitMax(int price[]){
        int maxPrice = 0;
        int bestBuy = price[0];

        for(int i = 1; i < price.length; i++){
            if(price[i] > bestBuy){
                maxPrice = Math.max(maxPrice, price[i] - bestBuy);
            }
            bestBuy = Math.min(price[i], bestBuy);
        }
        return maxPrice;
    }
    public static void main(String[] args) {
        int price[] = {7, 1, 5, 3, 6, 4};
        System.out.println(profitMax(price));
    }
    
}
