/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIIdleModeLayoutAttributes : NSObject {

	BOOL _wantsDimmingOverlay;
	double _alphaOffset;
	CGPoint _centerOffset;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGPoint centerOffset;                     //@synthesize centerOffset=_centerOffset - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) double alphaOffset;                       //@synthesize alphaOffset=_alphaOffset - In the implementation block
@property (assign,nonatomic) BOOL wantsDimmingOverlay;                 //@synthesize wantsDimmingOverlay=_wantsDimmingOverlay - In the implementation block
-(id)init;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(CGPoint)centerOffset;
-(void)setWantsDimmingOverlay:(BOOL)arg1 ;
-(BOOL)wantsDimmingOverlay;
-(double)alphaOffset;
-(void)setAlphaOffset:(double)arg1 ;
@end

