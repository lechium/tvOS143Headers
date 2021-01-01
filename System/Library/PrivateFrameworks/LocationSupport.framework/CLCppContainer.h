/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLCppContainer : NSObject <NSSecureCoding> {

	const void* _cppObjectPtr;
	/*^block*/id _destructor;
	unsigned long long _binaryVersion;
	unsigned long long _sizeOfType;

}

@property (assign,nonatomic) const void* cppObjectPtr;                        //@synthesize cppObjectPtr=_cppObjectPtr - In the implementation block
@property (nonatomic,copy) id destructor;                                     //@synthesize destructor=_destructor - In the implementation block
@property (nonatomic,readonly) unsigned long long binaryVersion;              //@synthesize binaryVersion=_binaryVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeOfType;                 //@synthesize sizeOfType=_sizeOfType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)containerWithObject:(void*)arg1 destructor:(/*^block*/id)arg2 binaryVersion:(unsigned long long)arg3 typeSize:(unsigned long long)arg4 ;
-(void)dealloc;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)binaryVersion;
-(unsigned long long)sizeOfType;
-(const void*)cppObjectPtr;
-(void)setCppObjectPtr:(const void*)arg1 ;
-(id)initWithObject:(void*)arg1 destructor:(/*^block*/id)arg2 binaryVersion:(unsigned long long)arg3 typeSize:(unsigned long long)arg4 ;
-(void)setDestructor:(id)arg1 ;
-(id)destructor;
@end

