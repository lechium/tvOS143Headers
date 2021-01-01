/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, NSMutableArray;

@interface CalDAVPrincipalResult : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _displayName;
	NSString* _resultType;
	NSString* _principalPath;
	NSArray* _emailAddresses;
	NSMutableArray* _mCUAddresses;
	NSMutableArray* _mEmailAddresses;

}

@property (nonatomic,retain) NSMutableArray * mCUAddresses;                 //@synthesize mCUAddresses=_mCUAddresses - In the implementation block
@property (nonatomic,retain) NSMutableArray * mEmailAddresses;              //@synthesize mEmailAddresses=_mEmailAddresses - In the implementation block
@property (nonatomic,retain) NSString * firstName;                          //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                           //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * resultType;                         //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,retain) NSString * principalPath;                      //@synthesize principalPath=_principalPath - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,retain) NSArray * emailAddresses;                      //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * cuAddresses; 
@property (nonatomic,readonly) NSString * preferredCUAddress; 
+(id)resultFromResponse:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)resultType;
-(NSString *)displayName;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setResultType:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithResponse:(id)arg1 ;
-(NSArray *)emailAddresses;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(NSArray *)cuAddresses;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(id)convertToDAContactSearchResultElement;
-(NSString *)preferredCUAddress;
-(void)setMCUAddresses:(NSMutableArray *)arg1 ;
-(void)setMEmailAddresses:(NSMutableArray *)arg1 ;
-(void)addEmail:(id)arg1 ;
-(void)addCUAddress:(id)arg1 ;
-(NSMutableArray *)mCUAddresses;
-(NSMutableArray *)mEmailAddresses;
@end

