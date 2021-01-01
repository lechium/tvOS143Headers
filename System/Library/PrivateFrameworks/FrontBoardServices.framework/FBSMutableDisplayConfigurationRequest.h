/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSDisplayConfigurationRequest.h>

@interface FBSMutableDisplayConfigurationRequest : FBSDisplayConfigurationRequest

@property (assign,nonatomic) long long overscanCompensation; 
@property (assign,nonatomic) CGSize nativePixelSize; 
@property (assign,nonatomic) double refreshRate; 
@property (assign,nonatomic) long long hdrMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOverscanCompensation:(long long)arg1 ;
-(void)setNativePixelSize:(CGSize)arg1 ;
-(void)setRefreshRate:(double)arg1 ;
-(void)setHdrMode:(long long)arg1 ;
@end

