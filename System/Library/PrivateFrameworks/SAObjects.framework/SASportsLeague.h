/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SASportsSeason;

@interface SASportsLeague : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * diplayedText; 
@property (assign,nonatomic) BOOL displayTeamLocationOverName; 
@property (nonatomic,copy) NSString * displayedText; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) SASportsSeason * season; 
@property (nonatomic,copy) NSString * sport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)league;
+(id)leagueWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)diplayedText;
-(void)setDiplayedText:(NSString *)arg1 ;
-(BOOL)displayTeamLocationOverName;
-(void)setDisplayTeamLocationOverName:(BOOL)arg1 ;
-(NSString *)displayedText;
-(void)setDisplayedText:(NSString *)arg1 ;
-(SASportsSeason *)season;
-(void)setSeason:(SASportsSeason *)arg1 ;
-(NSString *)sport;
-(void)setSport:(NSString *)arg1 ;
@end

