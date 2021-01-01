/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface BWTimeSkew : NSObject {

	SCD_Struct_BW7 _native;
	SCD_Struct_BW7 _original;
	SCD_Struct_BW7 _adjusted;
	BOOL _isBracketFrame;
	BOOL _isSISFrame;
	BOOL _isStartOfDiscontinuity;

}

@property (nonatomic,readonly) SCD_Struct_BW7 native;                  //@synthesize native=_native - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW7 original;                //@synthesize original=_original - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW7 adjusted;                  //@synthesize adjusted=_adjusted - In the implementation block
@property (nonatomic,readonly) BOOL isBracketFrame;                    //@synthesize isBracketFrame=_isBracketFrame - In the implementation block
@property (nonatomic,readonly) BOOL isSISFrame;                        //@synthesize isSISFrame=_isSISFrame - In the implementation block
@property (assign,nonatomic) BOOL isStartOfDiscontinuity;              //@synthesize isStartOfDiscontinuity=_isStartOfDiscontinuity - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(SCD_Struct_BW7)original;
-(SCD_Struct_BW7)native;
-(SCD_Struct_BW7)adjusted;
-(id)initWithNativeTime:(SCD_Struct_BW7)arg1 originalTime:(SCD_Struct_BW7)arg2 isBracketFrame:(BOOL)arg3 isSISFrame:(BOOL)arg4 ;
-(void)setAdjusted:(SCD_Struct_BW7)arg1 ;
-(BOOL)isBracketFrame;
-(BOOL)isSISFrame;
-(BOOL)isStartOfDiscontinuity;
-(void)setIsStartOfDiscontinuity:(BOOL)arg1 ;
@end

