/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSNumber, NSString;

@interface HAPTLVNumberValueBase : NSObject <NSCopying, HAPTLVProtocol> {

	NSNumber* _value;

}

@property (nonatomic,retain) NSNumber * value;                      //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)_parseFromData:(const char*)arg1 length:(unsigned long long)arg2 status:(int*)arg3 ;
-(id)_serialize;
@end

