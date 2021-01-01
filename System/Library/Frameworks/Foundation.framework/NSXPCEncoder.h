/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCCoder.h>

@protocol OS_xpc_object, NSXPCEncoderDelegate;
@class NSObject, NSXPCConnection;

@interface NSXPCEncoder : NSXPCCoder {

	NSObject*<OS_xpc_object> _oolObjects;
	NSXPCConnection* _connection;
	CFDictionaryRef _replacedByDelegateObjects;
	id<NSXPCEncoderDelegate> _delegate;
	SCD_Struct_NS72* _encoder;
	unsigned long long _genericIndex;
	BOOL _topLevelDictionary;
	BOOL _finished;
	BOOL _askForReplacement;

}

@property (assign) NSXPCConnection * _connection;                  //@synthesize connection=_connection - In the implementation block
@property (assign) id<NSXPCEncoderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(BOOL)allowsKeyedCoding;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id<NSXPCEncoderDelegate>)delegate;
-(void)setDelegate:(id<NSXPCEncoderDelegate>)arg1 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(NSXPCConnection *)_connection;
-(void)encodeObject:(id)arg1 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)_encodeUnkeyedObject:(id)arg1 ;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(id)initWithStackSpace:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)_encodeInvocation:(id)arg1 isReply:(BOOL)arg2 into:(id)arg3 ;
-(void)_encodeInvocationObjectArgumentsOnly:(id*)arg1 count:(unsigned long long)arg2 typeString:(const char*)arg3 selector:(SEL)arg4 isReply:(BOOL)arg5 into:(id)arg6 ;
-(void)_startTopLevelDictionary;
-(id)_newRootXPCObject;
-(id)connection;
-(unsigned long long)_addOOLXPCObject:(id)arg1 ;
-(id)_replaceObject:(id)arg1 ;
-(void)_checkObject:(id)arg1 ;
-(void)_encodeObject:(id)arg1 ;
-(void)_encodeCString:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
@end

