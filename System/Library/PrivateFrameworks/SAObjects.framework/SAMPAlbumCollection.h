/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAMPCollection.h>

@class NSString;

@interface SAMPAlbumCollection : SAMPCollection

@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)albumCollection;
+(id)albumCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)description;
-(id)groupIdentifier;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)artist;
-(void)setDescription:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
@end
