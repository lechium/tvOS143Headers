/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PDS.framework/PDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDS/PDSXPCInterfaceVendor.h>
#import <PDS/PDSXPCConnectionVendor.h>

@class NSString;

@interface PDSXPCAdapter : NSObject <PDSXPCInterfaceVendor, PDSXPCConnectionVendor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstance;
+(id)defaultInterfaceVendor;
+(id)defaultConnectionVendor;
+(BOOL)disableXPC;
+(void)setDisableXPC:(BOOL)arg1 ;
-(id)_init;
-(id)interfaceWithProtocol:(id)arg1 ;
-(id)connectionForMachService:(id)arg1 ;
@end

