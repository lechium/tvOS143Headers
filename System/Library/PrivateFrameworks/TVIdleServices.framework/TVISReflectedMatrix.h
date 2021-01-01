/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TVISReflectedMatrix : NSObject {

	char* _elements;
	unsigned long long _size;

}

@property (nonatomic,readonly) unsigned long long size;              //@synthesize size=_size - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(unsigned long long)size;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithSize:(unsigned long long)arg1 elements:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)isEqualToMatrix:(id)arg1 ;
-(id)initWithLowerElements:(const char*)arg1 length:(unsigned long long)arg2 ;
-(unsigned char)elementAtIndexPath:(id)arg1 ;
@end

