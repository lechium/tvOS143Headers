/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKStaticSyncControlClient.h>

@class HKProxyProvider, NSString;

@interface HKStaticSyncControl : NSObject <_HKXPCExportable, HKStaticSyncControlClient> {

	HKProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(void)runStaticSyncExportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 batchSize:(unsigned long long)arg4 progressHandler:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)runStaticSyncImportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 progressHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
@end

