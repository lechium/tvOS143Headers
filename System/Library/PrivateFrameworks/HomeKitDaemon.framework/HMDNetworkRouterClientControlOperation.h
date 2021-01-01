/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterControlOperation, HMDNetworkRouterClientConfiguration, NSString;

@interface HMDNetworkRouterClientControlOperation : NSObject <NSCopying, HAPTLVProtocol> {

	HMDNetworkRouterControlOperation* _operation;
	HMDNetworkRouterClientConfiguration* _configuration;

}

@property (nonatomic,retain) HMDNetworkRouterControlOperation * operation;                     //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterClientConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HMDNetworkRouterClientConfiguration *)configuration;
-(void)setConfiguration:(HMDNetworkRouterClientConfiguration *)arg1 ;
-(HMDNetworkRouterControlOperation *)operation;
-(void)setOperation:(HMDNetworkRouterControlOperation *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithOperation:(id)arg1 configuration:(id)arg2 ;
@end

