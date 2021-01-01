/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol _PASAssetProtocol <NSObject>
@property (nonatomic,readonly) unsigned long long assetVersion; 
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) unsigned long long compatibilityVersion; 
@property (nonatomic,readonly) unsigned long long bestAssetVersionObserved; 
@required
-(unsigned long long)compatibilityVersion;
-(unsigned long long)assetVersion;
-(NSString *)assetType;
-(id)registerUpdateHandler:(/*^block*/id)arg1;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
-(id)pathForResourceWithName:(id)arg1 extension:(id)arg2;
-(unsigned long long)bestAssetVersionObserved;

@end

