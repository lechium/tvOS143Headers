/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSArray, NSString;

@interface SAFmfSearch : SADomainCommand

@property (nonatomic,retain) SALocation * currentLocation; 
@property (nonatomic,copy) NSArray * friends; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,retain) SALocation * requestedLocation; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocation *)currentLocation;
-(void)setCurrentLocation:(SALocation *)arg1 ;
-(NSString *)proximity;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setProximity:(NSString *)arg1 ;
-(NSArray *)friends;
-(void)setFriends:(NSArray *)arg1 ;
-(SALocation *)requestedLocation;
-(void)setRequestedLocation:(SALocation *)arg1 ;
@end
