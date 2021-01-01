/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
@class TVHKMediaEntityIdentifier;

@interface TVHKFace : NSObject {

	TVHKMediaEntityIdentifier* _identifier;
	CGRect _fractionalRect;

}

@property (nonatomic,retain) TVHKMediaEntityIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGRect fractionalRect;                               //@synthesize fractionalRect=_fractionalRect - In the implementation block
+(CGRect)_fractionRectFromStringRepresentation:(id)arg1 ;
+(id)_stringRepresentationFromFractionRect:(CGRect)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(TVHKMediaEntityIdentifier *)identifier;
-(void)setIdentifier:(TVHKMediaEntityIdentifier *)arg1 ;
-(id)stringRepresentation;
-(id)initWithStringRepresentation:(id)arg1 ;
-(CGRect)fractionalRect;
-(void)setFractionalRect:(CGRect)arg1 ;
@end

