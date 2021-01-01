/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol HKHealthStoreProviderProxyProvider;
@class NSString;

@interface HKHealthStoreProvider : NSObject <_HKXPCExportable> {

	id<HKHealthStoreProviderProxyProvider> _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(id)init;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithProxyProvider:(id)arg1 ;
-(void)fetchStoreForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAvailableIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)requestAuthorizationToNewStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)requestAuthorizationToNewStoreToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

