/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIConfirmationView : SAAceView

@property (nonatomic,copy) NSArray * allConfirmationOptions; 
@property (nonatomic,copy) NSString * cancelTrigger; 
@property (nonatomic,copy) NSArray * confirmCommands; 
@property (nonatomic,copy) NSString * confirmText; 
@property (nonatomic,copy) NSArray * denyCommands; 
@property (nonatomic,copy) NSString * denyText; 
@property (nonatomic,copy) NSString * style; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * title; 
+(id)confirmationView;
+(id)confirmationViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)encodedClassName;
-(NSArray *)allConfirmationOptions;
-(void)setAllConfirmationOptions:(NSArray *)arg1 ;
-(NSString *)cancelTrigger;
-(void)setCancelTrigger:(NSString *)arg1 ;
-(NSArray *)confirmCommands;
-(void)setConfirmCommands:(NSArray *)arg1 ;
-(NSString *)confirmText;
-(void)setConfirmText:(NSString *)arg1 ;
-(NSArray *)denyCommands;
-(void)setDenyCommands:(NSArray *)arg1 ;
-(NSString *)denyText;
-(void)setDenyText:(NSString *)arg1 ;
@end
