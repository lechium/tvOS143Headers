/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, PXGadgetSpec;


@protocol PXMutableGadgetSectionHeader
@property (assign,nonatomic) unsigned long long headerStyle; 
@property (nonatomic,copy) NSString * headerTitle; 
@property (assign,nonatomic) unsigned long long buttonType; 
@property (nonatomic,copy) NSString * customButtonTitle; 
@property (nonatomic,copy) id accessoryButtonPressed; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec; 
@property (assign,nonatomic) BOOL isFirstSection; 
@property (assign,nonatomic) BOOL shouldShowDividerOnFirstSection; 
@required
-(unsigned long long)buttonType;
-(void)setButtonType:(unsigned long long)arg1;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(id)arg1;
-(unsigned long long)headerStyle;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(id)arg1;
-(void)setHeaderStyle:(unsigned long long)arg1;
-(NSString *)customButtonTitle;
-(void)setCustomButtonTitle:(id)arg1;
-(id)accessoryButtonPressed;
-(void)setAccessoryButtonPressed:(/*^block*/id)arg1;
-(BOOL)isFirstSection;
-(void)setIsFirstSection:(BOOL)arg1;
-(BOOL)shouldShowDividerOnFirstSection;
-(void)setShouldShowDividerOnFirstSection:(BOOL)arg1;

@end

