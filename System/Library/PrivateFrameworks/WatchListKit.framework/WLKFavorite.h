/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WLKFavorite : NSObject {

	NSString* _ID;
	NSString* _name;
	NSString* _leagueID;

}

@property (nonatomic,readonly) NSString * ID;                    //@synthesize ID=_ID - In the implementation block
@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * leagueID;              //@synthesize leagueID=_leagueID - In the implementation block
@property (nonatomic,readonly) NSString * id; 
-(NSString *)name;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)ID;
-(NSString *)id;
-(NSString *)leagueID;
@end

