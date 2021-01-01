/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSString, EDAMNoteFilter, NSNumber;

@interface EDAMSearchRecord : FATObject {

	NSString* _userQuery;
	EDAMNoteFilter* _noteFilter;
	NSNumber* _searchScope;
	NSNumber* _searchTime;
	NSString* _selectedNoteGUID;
	NSNumber* _selectTime;
	NSNumber* _noteRank;
	NSNumber* _noteCount;

}

@property (nonatomic,retain) NSString * userQuery;                     //@synthesize userQuery=_userQuery - In the implementation block
@property (nonatomic,retain) EDAMNoteFilter * noteFilter;              //@synthesize noteFilter=_noteFilter - In the implementation block
@property (nonatomic,retain) NSNumber * searchScope;                   //@synthesize searchScope=_searchScope - In the implementation block
@property (nonatomic,retain) NSNumber * searchTime;                    //@synthesize searchTime=_searchTime - In the implementation block
@property (nonatomic,retain) NSString * selectedNoteGUID;              //@synthesize selectedNoteGUID=_selectedNoteGUID - In the implementation block
@property (nonatomic,retain) NSNumber * selectTime;                    //@synthesize selectTime=_selectTime - In the implementation block
@property (nonatomic,retain) NSNumber * noteRank;                      //@synthesize noteRank=_noteRank - In the implementation block
@property (nonatomic,retain) NSNumber * noteCount;                     //@synthesize noteCount=_noteCount - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)userQuery;
-(void)setSearchScope:(NSNumber *)arg1 ;
-(NSNumber *)searchScope;
-(void)setUserQuery:(NSString *)arg1 ;
-(EDAMNoteFilter *)noteFilter;
-(void)setNoteFilter:(EDAMNoteFilter *)arg1 ;
-(NSNumber *)searchTime;
-(void)setSearchTime:(NSNumber *)arg1 ;
-(NSString *)selectedNoteGUID;
-(void)setSelectedNoteGUID:(NSString *)arg1 ;
-(NSNumber *)selectTime;
-(void)setSelectTime:(NSNumber *)arg1 ;
-(NSNumber *)noteRank;
-(void)setNoteRank:(NSNumber *)arg1 ;
-(NSNumber *)noteCount;
-(void)setNoteCount:(NSNumber *)arg1 ;
@end

