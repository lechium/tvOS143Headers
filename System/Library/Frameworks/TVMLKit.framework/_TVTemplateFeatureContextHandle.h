/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _TVTemplateFeatureContextHandle : NSObject {

	id _context;
	long long _rank;

}

@property (nonatomic,readonly) id context;                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long rank;              //@synthesize rank=_rank - In the implementation block
+(id)handleWithContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)context;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
@end

