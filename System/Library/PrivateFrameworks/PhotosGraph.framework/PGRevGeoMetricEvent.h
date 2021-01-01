/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLMetricEvent.h>

@class NSString, NSDictionary;

@interface PGRevGeoMetricEvent : NSObject <PLMetricEvent> {

	NSString* _identifier;
	double _numberOfAssetClustersPerMomentMean;
	double _numberOfAssetClustersPerMomentStdDev;
	double _numberOfAssetsPerClusterMean;
	double _numberOfAssetsPerClusterStdDev;
	double _ratioAssetClustersWithin10mOfCenter;
	double _ratioAssetClustersWithin20mOfCenter;
	double _ratioAssetClustersWithin50mOfCenter;
	double _ratioAssetClustersWithin100mOfCenter;
	double _ratioAssetClusters100mPlusFromCenter;

}

@property (nonatomic,readonly) double numberOfAssetClustersPerMomentMean;                //@synthesize numberOfAssetClustersPerMomentMean=_numberOfAssetClustersPerMomentMean - In the implementation block
@property (nonatomic,readonly) double numberOfAssetClustersPerMomentStdDev;              //@synthesize numberOfAssetClustersPerMomentStdDev=_numberOfAssetClustersPerMomentStdDev - In the implementation block
@property (nonatomic,readonly) double numberOfAssetsPerClusterMean;                      //@synthesize numberOfAssetsPerClusterMean=_numberOfAssetsPerClusterMean - In the implementation block
@property (nonatomic,readonly) double numberOfAssetsPerClusterStdDev;                    //@synthesize numberOfAssetsPerClusterStdDev=_numberOfAssetsPerClusterStdDev - In the implementation block
@property (nonatomic,readonly) double ratioAssetClustersWithin10mOfCenter;               //@synthesize ratioAssetClustersWithin10mOfCenter=_ratioAssetClustersWithin10mOfCenter - In the implementation block
@property (nonatomic,readonly) double ratioAssetClustersWithin20mOfCenter;               //@synthesize ratioAssetClustersWithin20mOfCenter=_ratioAssetClustersWithin20mOfCenter - In the implementation block
@property (nonatomic,readonly) double ratioAssetClustersWithin50mOfCenter;               //@synthesize ratioAssetClustersWithin50mOfCenter=_ratioAssetClustersWithin50mOfCenter - In the implementation block
@property (nonatomic,readonly) double ratioAssetClustersWithin100mOfCenter;              //@synthesize ratioAssetClustersWithin100mOfCenter=_ratioAssetClustersWithin100mOfCenter - In the implementation block
@property (nonatomic,readonly) double ratioAssetClusters100mPlusFromCenter;              //@synthesize ratioAssetClusters100mPlusFromCenter=_ratioAssetClusters100mPlusFromCenter - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(NSDictionary *)payload;
-(void)gatherMetricsWithProgressBlock:(/*^block*/id)arg1 ;
-(id)initWithNumberOfAssetClustersPerMomentMean:(double)arg1 numberOfAssetClustersPerMomentStdDev:(double)arg2 numberOfAssetsPerClusterMean:(double)arg3 numberOfAssetsPerClusterStdDev:(double)arg4 ratioAssetClustersWithin10mOfCenter:(double)arg5 ratioAssetClustersWithin20mOfCenter:(double)arg6 ratioAssetClustersWithin50mOfCenter:(double)arg7 ratioAssetClustersWithin100mOfCenter:(double)arg8 ratioAssetClusters100mPlusFromCenter:(double)arg9 ;
-(double)numberOfAssetClustersPerMomentMean;
-(double)numberOfAssetClustersPerMomentStdDev;
-(double)numberOfAssetsPerClusterMean;
-(double)numberOfAssetsPerClusterStdDev;
-(double)ratioAssetClustersWithin10mOfCenter;
-(double)ratioAssetClustersWithin20mOfCenter;
-(double)ratioAssetClustersWithin50mOfCenter;
-(double)ratioAssetClustersWithin100mOfCenter;
-(double)ratioAssetClusters100mPlusFromCenter;
@end

