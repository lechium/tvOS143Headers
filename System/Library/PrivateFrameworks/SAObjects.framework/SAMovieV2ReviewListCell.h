/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate;

@interface SAMovieV2ReviewListCell : SADomainObject

@property (nonatomic,copy) NSString * reviewAuthor; 
@property (nonatomic,copy) NSDate * reviewDate; 
@property (nonatomic,copy) NSString * reviewText; 
+(id)reviewListCell;
+(id)reviewListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDate *)reviewDate;
-(void)setReviewDate:(NSDate *)arg1 ;
-(NSString *)reviewText;
-(void)setReviewText:(NSString *)arg1 ;
-(NSString *)reviewAuthor;
-(void)setReviewAuthor:(NSString *)arg1 ;
@end

