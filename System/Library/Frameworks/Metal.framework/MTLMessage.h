/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MTLMessage : NSObject {

	unsigned long long _type;
	NSString* _string;

}

@property (readonly) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (retain,readonly) NSString * string;              //@synthesize string=_string - In the implementation block
-(void)dealloc;
-(NSString *)string;
-(unsigned long long)type;
-(id)init:(unsigned long long)arg1 message:(id)arg2 ;
@end

