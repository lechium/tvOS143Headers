/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSValueTransformer.h>

@interface TVHKBlockValueTransformer : NSValueTransformer {

	/*^block*/id _valueTransformBlock;

}

@property (nonatomic,copy) id valueTransformBlock;              //@synthesize valueTransformBlock=_valueTransformBlock - In the implementation block
+(id)new;
+(BOOL)allowsReverseTransformation;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)valueTransformBlock;
-(id)initWithValueTransformBlock:(/*^block*/id)arg1 ;
-(void)setValueTransformBlock:(id)arg1 ;
@end

