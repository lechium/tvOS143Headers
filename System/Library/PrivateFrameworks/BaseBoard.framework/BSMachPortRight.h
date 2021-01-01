/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding, BSInvalidatable> {

	os_unfair_lock_s _lock;
	unsigned _lock_port;
	unsigned _rawPort;
	int _owner;
	NSString* _trace;

}

@property (nonatomic,copy,readonly) NSString * trace;               //@synthesize trace=_trace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_rightDescription;
+(BOOL)_unsafe_isUsablePort:(unsigned)arg1 ;
+(void)_unsafe_destroyPort:(unsigned)arg1 ;
+(unsigned)_unsafe_decodePort:(id)arg1 ;
+(id)_descriptionForPort:(unsigned)arg1 owner:(int)arg2 tag:(id)arg3 trace:(id)arg4 ;
+(xpc_type_sRef)_decodeType;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)port;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)isUsable;
-(id)_lock_encodePort:(unsigned)arg1 ;
-(NSString *)trace;
-(unsigned)rawPort;
@end

