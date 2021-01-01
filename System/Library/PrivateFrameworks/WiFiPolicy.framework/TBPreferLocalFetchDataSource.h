/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TBCacheProvider;
@class TBDataSource;

@interface TBPreferLocalFetchDataSource : NSObject {

	TBDataSource* _localDataSource;
	TBDataSource* _remoteDataSource;
	id<TBCacheProvider> _cacheProvider;

}

@property (nonatomic,retain) TBDataSource * localDataSource;                 //@synthesize localDataSource=_localDataSource - In the implementation block
@property (nonatomic,retain) TBDataSource * remoteDataSource;                //@synthesize remoteDataSource=_remoteDataSource - In the implementation block
@property (nonatomic,retain) id<TBCacheProvider> cacheProvider;              //@synthesize cacheProvider=_cacheProvider - In the implementation block
-(TBDataSource *)localDataSource;
-(void)setLocalDataSource:(TBDataSource *)arg1 ;
-(id)initWithLocalDataSource:(id)arg1 remoteDataSource:(id)arg2 cacheProvider:(id)arg3 ;
-(TBDataSource *)remoteDataSource;
-(void)setRemoteDataSource:(TBDataSource *)arg1 ;
-(id<TBCacheProvider>)cacheProvider;
-(void)setCacheProvider:(id<TBCacheProvider>)arg1 ;
@end

