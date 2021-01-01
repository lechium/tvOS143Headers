/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKGridLayoutMetrics.h>

@class NSMutableDictionary, NSArray, GKCollectionViewDataSource, NSString;

@interface GKDataSourceMetrics : GKGridLayoutMetrics {

	NSMutableDictionary* _sectionToMetrics;
	NSArray* _childMetrics;
	GKCollectionViewDataSource* _dataSource;
	NSString* _cachedKey;
	NSRange _globalSectionRange;
	NSRange _localSectionRange;

}

@property (nonatomic,retain) NSString * cachedKey;                                 //@synthesize cachedKey=_cachedKey - In the implementation block
@property (assign,nonatomic) NSRange globalSectionRange;                           //@synthesize globalSectionRange=_globalSectionRange - In the implementation block
@property (assign,nonatomic) NSRange localSectionRange;                            //@synthesize localSectionRange=_localSectionRange - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionToMetrics;               //@synthesize sectionToMetrics=_sectionToMetrics - In the implementation block
@property (nonatomic,retain) NSArray * childMetrics;                               //@synthesize childMetrics=_childMetrics - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)dataSourceMetricsWithMetrics:(id)arg1 dataSource:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(GKCollectionViewDataSource *)dataSource;
-(void)setDataSource:(GKCollectionViewDataSource *)arg1 ;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(void)setGlobalSectionRange:(NSRange)arg1 ;
-(NSRange)globalSectionRange;
-(id)initWithMetrics:(id)arg1 dataSource:(id)arg2 ;
-(void)setLocalSectionRange:(NSRange)arg1 ;
-(NSMutableDictionary *)sectionToMetrics;
-(void)setChildMetrics:(NSArray *)arg1 ;
-(void)setCachedKey:(NSString *)arg1 ;
-(id)globalLayoutKey;
-(id)metricsForSection:(long long)arg1 ;
-(void)setMetrics:(id)arg1 forSection:(long long)arg2 ;
-(id)globalLayoutKeyForSection:(long long)arg1 ;
-(NSRange)localSectionRange;
-(void)setSectionToMetrics:(NSMutableDictionary *)arg1 ;
-(NSArray *)childMetrics;
-(NSString *)cachedKey;
@end

