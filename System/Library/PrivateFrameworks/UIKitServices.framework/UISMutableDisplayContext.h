/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitServices/UIKitServices-Structs.h>
#import <UIKitServices/UISDisplayContext.h>

@class FBSDisplayConfiguration, UISApplicationSupportDisplayEdgeInfo;

@interface UISMutableDisplayContext : UISDisplayContext

@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration; 
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInfo * displayEdgeInfo; 
@property (assign,nonatomic) unsigned long long artworkSubtype; 
@property (assign,nonatomic) unsigned long long userInterfaceStyle; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(void)setUserInterfaceStyle:(unsigned long long)arg1 ;
-(void)setArtworkSubtype:(unsigned long long)arg1 ;
-(void)setDisplayEdgeInfo:(UISApplicationSupportDisplayEdgeInfo *)arg1 ;
@end

