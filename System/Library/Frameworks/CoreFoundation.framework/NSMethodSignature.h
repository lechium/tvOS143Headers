/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSMethodSignature : NSObject {

	NSMethodFrameDescriptor* _frameDescriptor;
	char* _typeString;
	unsigned long long _flags;

}

@property (readonly) unsigned long long numberOfArguments; 
@property (readonly) unsigned long long frameLength; 
@property (readonly) const char* methodReturnType; 
@property (readonly) unsigned long long methodReturnLength; 
+(id)cd_signatureWithObjCTypes:(const char*)arg1 ;
+(void)initialize;
+(id)signatureWithObjCTypes:(const char*)arg1 ;
-(const char*)cd_getArgumentTypeAtIndex:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(unsigned long long)_flags;
-(NSMethodFrameArgInfo*)_argInfo:(long long)arg1 ;
-(unsigned long long)numberOfArguments;
-(id)_initWithROMEntry:(const CFMethodSignatureROMEntry*)arg1 ;
-(NSMethodFrameDescriptor*)_frameDescriptor;
-(const char*)_cTypeString;
-(id)_typeString;
-(id)_signatureForBlockAtArgumentIndex:(long long)arg1 ;
-(Class)_classForObjectAtArgumentIndex:(long long)arg1 ;
-(id)_protocolsForObjectAtArgumentIndex:(long long)arg1 ;
-(const char*)getArgumentTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)frameLength;
-(BOOL)isOneway;
-(const char*)methodReturnType;
-(unsigned long long)methodReturnLength;
-(BOOL)_isHiddenStructRet;
-(BOOL)_isAllObjects;
@end

