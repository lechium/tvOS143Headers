/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MLImageSize : NSObject <NSSecureCoding> {

	long long _pixelsWide;
	long long _pixelsHigh;

}

@property (readonly) long long pixelsWide;              //@synthesize pixelsWide=_pixelsWide - In the implementation block
@property (readonly) long long pixelsHigh;              //@synthesize pixelsHigh=_pixelsHigh - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)pixelsWide;
-(long long)pixelsHigh;
-(id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 ;
-(BOOL)isEqualToImageSize:(id)arg1 ;
@end

