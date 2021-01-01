/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>

@class NSString;

@interface AMSAnisette : NSObject <AMSBagConsumer_Project>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(BOOL)_shouldRetryAfterError:(id)arg1 ;
+(id)createBagForSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)handleResponse:(id)arg1 type:(long long)arg2 bag:(id)arg3 account:(id)arg4 ;
+(id)_handleActionName:(id)arg1 actionData:(id)arg2 account:(id)arg3 type:(long long)arg4 bag:(id)arg5 ;
+(id)_headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 ;
+(void)_bagDomainExistsForURL:(id)arg1 type:(long long)arg2 bag:(id)arg3 completion:(/*^block*/id)arg4 ;
+(unsigned long long)_accountIDForType:(long long)arg1 account:(id)arg2 ;
+(id)_provisionMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
+(id)_syncMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
+(id)_eraseProvisioningForType:(long long)arg1 account:(id)arg2 ;
+(BOOL)handleResponse:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4 ;
+(id)headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4 ;
@end

