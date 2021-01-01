/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBaseComposeHeaderField.h>

@class GKLabel;

@interface GKComposeHeaderField : GKBaseComposeHeaderField {

	GKLabel* _valueLabel;

}

@property (nonatomic,retain) GKLabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(GKLabel *)valueLabel;
-(void)setValueLabel:(GKLabel *)arg1 ;
-(id)valueText;
-(CGRect)valueFrame;
-(void)setMaxLineCount:(unsigned long long)arg1 ;
-(void)setValueText:(id)arg1 ;
@end

