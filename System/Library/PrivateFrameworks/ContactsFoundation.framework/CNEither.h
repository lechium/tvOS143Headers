/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNPair;

@interface CNEither : NSObject <NSSecureCoding> {

	CNPair* _pair;

}

@property (nonatomic,retain) CNPair * pair;               //@synthesize pair=_pair - In the implementation block
@property (nonatomic,readonly) BOOL isLeft; 
@property (nonatomic,readonly) BOOL isRight; 
@property (nonatomic,readonly) id left; 
@property (nonatomic,readonly) id right; 
+(BOOL)supportsSecureCoding;
+(id)eitherWithLeft:(id)arg1 right:(id)arg2 ;
+(id)eitherWithLeft:(id)arg1 ;
+(id)eitherWithRight:(id)arg1 ;
+(id)eitherWithBool:(BOOL)arg1 error:(id)arg2 ;
+(id)eitherWithBlock:(/*^block*/id)arg1 ;
+(id)firstLeftInLazyChain:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNPair *)pair;
-(id)left;
-(id)right;
-(BOOL)isLeft;
-(BOOL)isRight;
-(id)initWithLeft:(id)arg1 right:(id)arg2 ;
-(void)setPair:(CNPair *)arg1 ;
@end

