/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreChart/CoreChart-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CCChartViewDelegate;
@class CCVegaWorker, CCVegaWorkerClient, CCVegaRenderer, NSString, NSDictionary, NSArray, NSMutableSet, NSLocale, NSCalendar, NSLayoutConstraint, NSObject, UIAccessibilityElement;

@interface CCChartView : UIView {

	CCVegaWorker* _worker;
	CCVegaWorkerClient* _workerClient;
	CCVegaRenderer* _renderer;
	NSString* _baseConfigType;
	NSString* _rendererType;
	NSString* _config;
	NSDictionary* _configDictionary;
	NSString* _spec;
	NSDictionary* _specDictionary;
	double _zoomFactor;
	NSArray* _legacyData;
	NSMutableSet* _knownNamedDatasets;
	BOOL _preventGestures;
	BOOL _caUpdateFromBackground;
	NSLocale* _locale;
	NSCalendar* _calendar;
	BOOL _didCustomizeLocale;
	BOOL _didCustomizeCalendar;
	double _rendererWidth;
	double _rendererHeight;
	unsigned long long _translatesChartSizeIntoConstraints;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSObject*<CCChartViewDelegate> delegate;
	UIAccessibilityElement* _accessibilityDataSeriesElement;

}

@property (retain) NSString * config; 
@property (retain) NSDictionary * configDictionary; 
@property (retain) NSString * spec; 
@property (retain) NSDictionary * specDictionary; 
@property (assign,nonatomic) BOOL CATransactionFromBackgroundThread; 
@property (nonatomic,retain) NSString * rendererType; 
@property (nonatomic,retain) NSString * baseConfig; 
@property (nonatomic,retain) NSArray * data; 
@property (nonatomic,retain) NSLocale * locale; 
@property (nonatomic,retain) NSCalendar * calendar; 
@property (assign,nonatomic) double zoomFactor; 
@property (readonly) CGImageRef CGImage; 
@property (assign,nonatomic) double contentScaleFactor; 
@property (assign,nonatomic) unsigned long long translatesChartSizeIntoConstraints; 
@property (__weak) NSObject*<CCChartViewDelegate> delegate; 
@property (retain) NSArray * accessibilityDataSeriesElements; 
@property (retain) UIAccessibilityElement * accessibilityDataSeriesElement;                      //@synthesize accessibilityDataSeriesElement=_accessibilityDataSeriesElement - In the implementation block
+(void)cleanUp;
+(void)registerExpressionFunction:(/*^block*/id)arg1 withName:(id)arg2 ;
+(id)JSONStringFromDictionary:(id)arg1 ;
+(id)configForBaseConfigType:(id)arg1 ;
+(id)dictionaryFromJSONString:(id)arg1 ;
+(id)unwrapJSValue:(id)arg1 ;
+(id)compileSpec:(id)arg1 config:(id)arg2 baseConfig:(id)arg3 expressionFunctionNames:(id)arg4 error:(id*)arg5 ;
+(id)getBenchmarkRecords;
+(void)preloadFrameworkAssets;
+(id)compileSpecDictionary:(id)arg1 configDictionary:(id)arg2 baseConfig:(id)arg3 expressionFunctionNames:(id)arg4 error:(id*)arg5 ;
-(void)initialize;
-(void)dealloc;
-(NSArray *)data;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<CCChartViewDelegate>)delegate;
-(void)setDelegate:(NSObject*<CCChartViewDelegate>)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)setData:(NSArray *)arg1 ;
-(NSString *)config;
-(void)setConfig:(NSString *)arg1 ;
-(CGImageRef)CGImage;
-(void)render;
-(id)renderer;
-(void)setRenderer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)contentScaleFactor;
-(id)imageNamed:(id)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(NSString *)spec;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAccessibilityElements:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)accessibilityElements;
-(long long)accessibilityContainerType;
-(void)setSpec:(NSString *)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(double)zoomFactor;
-(NSDictionary *)configDictionary;
-(void)setConfigDictionary:(NSDictionary *)arg1 ;
-(void)registerExpressionFunction:(/*^block*/id)arg1 withName:(id)arg2 ;
-(id)initWithSpec:(id)arg1 config:(id)arg2 ;
-(id)initWithSpec:(id)arg1 config:(id)arg2 options:(id)arg3 ;
-(void)setRendererType:(NSString *)arg1 ;
-(void)setBaseConfig:(NSString *)arg1 ;
-(void)setCATransactionFromBackgroundThread:(BOOL)arg1 ;
-(void)refreshLocaleAndCalendar;
-(NSString *)rendererType;
-(NSString *)baseConfig;
-(void)lazilyInitializeRenderer;
-(void)setupWithSpec:(id)arg1 options:(id)arg2 ;
-(void)reinitializeRenderer;
-(id)loadChartDataFromURL:(id)arg1 error:(id*)arg2 ;
-(void)changeConstraints;
-(UIAccessibilityElement *)accessibilityDataSeriesElement;
-(id)colorNamed:(id)arg1 ;
-(id)dynamicColorNamed:(id)arg1 ;
-(id)localizedStringNamed:(id)arg1 ;
-(void)triggerMouseEvent:(id)arg1 type:(id)arg2 setConsumed:(BOOL)arg3 ;
-(id)eventToMouseEvent:(id)arg1 ;
-(void)triggerMouseEvent:(id)arg1 type:(id)arg2 ;
-(void)setSpecDictionary:(NSDictionary *)arg1 ;
-(void)setDefaultDataset:(id)arg1 ;
-(void)setNamedDataset:(id)arg1 rows:(id)arg2 ;
-(void)changeDefaultDatasetByInserting:(id)arg1 removingIDs:(id)arg2 ;
-(void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingIDs:(id)arg3 ;
-(id)getSignalWithName:(id)arg1 ;
-(void)setSignalWithName:(id)arg1 toValue:(id)arg2 ;
-(id)addListener:(/*^block*/id)arg1 toSignalWithName:(id)arg2 ;
-(void)removeListener:(id)arg1 fromSignalWithName:(id)arg2 ;
-(void)setAccessibilityDataSeriesElement:(UIAccessibilityElement *)arg1 ;
-(void)setupWithSpec:(id)arg1 ;
-(void)setupWithSpecDictionary:(id)arg1 ;
-(void)setupWithSpecDictionary:(id)arg1 options:(id)arg2 ;
-(BOOL)CATransactionFromBackgroundThread;
-(void)rendererDidUpdate;
-(NSDictionary *)specDictionary;
-(void)setSpec:(id)arg1 config:(id)arg2 ;
-(void)setSpec:(id)arg1 config:(id)arg2 baseConfig:(id)arg3 ;
-(void)setSpec:(id)arg1 config:(id)arg2 baseConfig:(id)arg3 rendererType:(id)arg4 ;
-(void)setSpecDictionary:(id)arg1 configDictionary:(id)arg2 ;
-(void)setSpecDictionary:(id)arg1 configDictionary:(id)arg2 baseConfig:(id)arg3 ;
-(void)setSpecDictionary:(id)arg1 configDictionary:(id)arg2 baseConfig:(id)arg3 rendererType:(id)arg4 ;
-(unsigned long long)translatesChartSizeIntoConstraints;
-(void)setTranslatesChartSizeIntoConstraints:(unsigned long long)arg1 ;
-(id)renderToImageWithType:(unsigned long long)arg1 ;
-(void)registerLocalExpressionFunction:(/*^block*/id)arg1 withName:(id)arg2 ;
-(void)setAccessibilityDataSeriesElements:(NSArray *)arg1 ;
-(NSArray *)accessibilityDataSeriesElements;
@end

