/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class StockChartData, NSString, Exchange, NSURL, StockDataSource;

@interface Stock : NSObject {

	StockChartData* _chartDataArray[9];
	BOOL _transient;
	unsigned _pricePrecision;
	NSString* _symbol;
	NSString* _companyName;
	NSString* _shortCompanyName;
	Exchange* _exchange;
	NSString* _price;
	NSString* _change;
	NSString* _currency;
	NSString* _symbolType;
	NSString* _open;
	NSString* _high;
	NSString* _low;
	NSString* _yearHigh;
	NSString* _yearLow;
	NSString* _volume;
	NSString* _averageVolume;
	NSString* _marketcap;
	NSString* _peRatio;
	NSString* _dividendYield;
	NSURL* _infoURL;
	StockDataSource* _dataSource;
	double _timeQuoteLastUpdated;
	double _timeMetadataLastUpdated;

}

@property (nonatomic,retain) NSString * symbol;                                 //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,retain) NSString * companyName;                            //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,retain) NSString * shortCompanyName;                       //@synthesize shortCompanyName=_shortCompanyName - In the implementation block
@property (nonatomic,retain) Exchange * exchange;                               //@synthesize exchange=_exchange - In the implementation block
@property (nonatomic,retain) NSString * price;                                  //@synthesize price=_price - In the implementation block
@property (nonatomic,retain) NSString * change;                                 //@synthesize change=_change - In the implementation block
@property (nonatomic,retain) NSString * currency;                               //@synthesize currency=_currency - In the implementation block
@property (nonatomic,retain) NSString * symbolType;                             //@synthesize symbolType=_symbolType - In the implementation block
@property (nonatomic,retain) NSString * open;                                   //@synthesize open=_open - In the implementation block
@property (nonatomic,retain) NSString * high;                                   //@synthesize high=_high - In the implementation block
@property (nonatomic,retain) NSString * low;                                    //@synthesize low=_low - In the implementation block
@property (nonatomic,retain) NSString * yearHigh;                               //@synthesize yearHigh=_yearHigh - In the implementation block
@property (nonatomic,retain) NSString * yearLow;                                //@synthesize yearLow=_yearLow - In the implementation block
@property (nonatomic,retain) NSString * volume;                                 //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSString * averageVolume;                          //@synthesize averageVolume=_averageVolume - In the implementation block
@property (nonatomic,retain) NSString * marketcap;                              //@synthesize marketcap=_marketcap - In the implementation block
@property (nonatomic,retain) NSString * peRatio;                                //@synthesize peRatio=_peRatio - In the implementation block
@property (nonatomic,retain) NSString * dividendYield;                          //@synthesize dividendYield=_dividendYield - In the implementation block
@property (nonatomic,readonly) unsigned pricePrecision;                         //@synthesize pricePrecision=_pricePrecision - In the implementation block
@property (nonatomic,retain) NSURL * infoURL;                                   //@synthesize infoURL=_infoURL - In the implementation block
@property (nonatomic,retain) StockDataSource * dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) double timeQuoteLastUpdated;                       //@synthesize timeQuoteLastUpdated=_timeQuoteLastUpdated - In the implementation block
@property (assign,nonatomic) double timeMetadataLastUpdated;                    //@synthesize timeMetadataLastUpdated=_timeMetadataLastUpdated - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                 //@synthesize transient=_transient - In the implementation block
@property (nonatomic,readonly) NSString * marketStatusDescription; 
@property (nonatomic,readonly) NSString * formattedPrice; 
@property (nonatomic,readonly) NSString * formattedChange; 
@property (nonatomic,readonly) NSString * formattedChangePercent; 
+(id)urlForStockSymbol:(id)arg1 ;
+(id)BlankValueString;
+(id)postfixCharacterForMagnitude:(unsigned)arg1 unitMagnitude:(unsigned*)arg2 ;
+(id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned)arg2 ;
+(id)listNameOverridesBySymbol;
+(id)_potentiallyAbsentKeys;
+(id)urlForStock:(id)arg1 ;
+(id)symbolForURL:(id)arg1 ;
+(id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSString *)open;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)symbol;
-(double)_updateInterval;
-(BOOL)isTransient;
-(void)setTransient:(BOOL)arg1 ;
-(void)setChange:(NSString *)arg1 ;
-(NSString *)change;
-(StockDataSource *)dataSource;
-(void)setDataSource:(StockDataSource *)arg1 ;
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(NSString *)price;
-(void)setPrice:(NSString *)arg1 ;
-(void)setHigh:(NSString *)arg1 ;
-(void)setLow:(NSString *)arg1 ;
-(NSString *)high;
-(NSString *)low;
-(void)setOpen:(NSString *)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(NSString *)companyName;
-(NSString *)formattedPrice;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(NSString *)dividendYield;
-(void)setDividendYield:(NSString *)arg1 ;
-(Exchange *)exchange;
-(void)setExchange:(Exchange *)arg1 ;
-(NSString *)peRatio;
-(void)setPeRatio:(NSString *)arg1 ;
-(void)setSymbol:(NSString *)arg1 ;
-(id)listName;
-(id)archiveDictionary;
-(NSURL *)infoURL;
-(void)setInfoURL:(NSURL *)arg1 ;
-(void)setSymbolType:(NSString *)arg1 ;
-(NSString *)symbolType;
-(void)setShortCompanyName:(NSString *)arg1 ;
-(void)setYearHigh:(NSString *)arg1 ;
-(void)setYearLow:(NSString *)arg1 ;
-(void)setAverageVolume:(NSString *)arg1 ;
-(void)setMarketcap:(NSString *)arg1 ;
-(void)_updatePricePrecision;
-(void)populateFromDictionary:(id)arg1 ;
-(void)setChartData:(id)arg1 forInterval:(long long)arg2 ;
-(id)formattedChangePercent:(BOOL)arg1 ;
-(unsigned)pricePrecision;
-(BOOL)marketIsOpen;
-(id)listNameWithMaxIndexNameLength:(unsigned long long)arg1 ;
-(id)listNameOverride;
-(BOOL)shouldUseCompanyNameAsListName:(unsigned long long)arg1 ;
-(BOOL)isIndex;
-(NSString *)formattedChangePercent;
-(NSString *)formattedChange;
-(BOOL)changeIsNegative;
-(BOOL)changeIsZero;
-(BOOL)isQuoteStale;
-(BOOL)isMetadataStale;
-(BOOL)doesQuoteNeedUpdate;
-(BOOL)doesMetadataNeedUpdate;
-(id)chartDataForInterval:(long long)arg1 ;
-(void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2 ;
-(void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2 ;
-(NSString *)marketStatusDescription;
-(id)formattedPriceDroppingFractionDigitsIfLengthExceeds:(unsigned long long)arg1 ;
-(NSString *)shortCompanyName;
-(NSString *)yearHigh;
-(NSString *)yearLow;
-(NSString *)averageVolume;
-(NSString *)marketcap;
-(double)timeQuoteLastUpdated;
-(void)setTimeQuoteLastUpdated:(double)arg1 ;
-(double)timeMetadataLastUpdated;
-(void)setTimeMetadataLastUpdated:(double)arg1 ;
@end

