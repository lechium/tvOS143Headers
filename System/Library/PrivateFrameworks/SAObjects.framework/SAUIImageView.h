/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, SAUIImageResource, NSNumber;

@interface SAUIImageView : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSNumber * tintColor; 
+(id)imageView;
+(id)imageViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIImageResource *)image;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setTintColor:(NSNumber *)arg1 ;
-(NSNumber *)tintColor;
-(id)encodedClassName;
@end

