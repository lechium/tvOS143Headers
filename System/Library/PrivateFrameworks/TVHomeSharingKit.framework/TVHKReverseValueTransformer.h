/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSValueTransformer.h>

@class NSValueTransformer;

@interface TVHKReverseValueTransformer : NSValueTransformer {

	NSValueTransformer* _valueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * valueTransformer;              //@synthesize valueTransformer=_valueTransformer - In the implementation block
+(id)new;
+(id)reverseValueTransformerWithValueTransformer:(id)arg1 ;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(NSValueTransformer *)valueTransformer;
-(void)setValueTransformer:(NSValueTransformer *)arg1 ;
-(id)initWithValueTransformer:(id)arg1 ;
@end

