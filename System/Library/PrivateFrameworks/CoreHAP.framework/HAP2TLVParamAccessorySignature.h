/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, HAP2TLVParamServiceList, NSString;

@interface HAP2TLVParamAccessorySignature : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _accessoryID;
	HAP2TLVParamServiceList* _serviceList;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * accessoryID;              //@synthesize accessoryID=_accessoryID - In the implementation block
@property (nonatomic,retain) HAP2TLVParamServiceList * serviceList;                //@synthesize serviceList=_serviceList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HAPTLVUnsignedNumberValue *)accessoryID;
-(void)setAccessoryID:(HAPTLVUnsignedNumberValue *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(HAP2TLVParamServiceList *)serviceList;
-(id)initWithAccessoryID:(id)arg1 serviceList:(id)arg2 ;
-(void)setServiceList:(HAP2TLVParamServiceList *)arg1 ;
@end

