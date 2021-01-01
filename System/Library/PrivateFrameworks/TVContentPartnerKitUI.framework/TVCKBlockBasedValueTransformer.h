/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSValueTransformer.h>

@interface TVCKBlockBasedValueTransformer : NSValueTransformer {

	/*^block*/id _transformerBlock;

}

@property (nonatomic,copy) id transformerBlock;              //@synthesize transformerBlock=_transformerBlock - In the implementation block
-(id)init;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)transformedValue:(id)arg1 ;
-(id)transformerBlock;
-(void)setTransformerBlock:(id)arg1 ;
@end

