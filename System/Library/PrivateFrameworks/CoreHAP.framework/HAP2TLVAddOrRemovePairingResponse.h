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

@class HAP2TLVPairingStateWrapper, HAP2TLVErrorsWrapper, NSString;

@interface HAP2TLVAddOrRemovePairingResponse : NSObject <NSCopying, HAPTLVProtocol> {

	HAP2TLVPairingStateWrapper* _state;
	HAP2TLVErrorsWrapper* _responseError;

}

@property (nonatomic,retain) HAP2TLVPairingStateWrapper * state;                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HAP2TLVErrorsWrapper * responseError;              //@synthesize responseError=_responseError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HAP2TLVPairingStateWrapper *)state;
-(void)setState:(HAP2TLVPairingStateWrapper *)arg1 ;
-(void)setResponseError:(HAP2TLVErrorsWrapper *)arg1 ;
-(HAP2TLVErrorsWrapper *)responseError;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithState:(id)arg1 responseError:(id)arg2 ;
@end

