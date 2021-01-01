/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CLSCachedContact : NSObject {

	BOOL _hasPicture;
	NSString* _contactIdentifier;
	NSString* _classifiedPersonLocalIdentifierWithFaceModelID;
	double _updateTimestamp;

}

@property (nonatomic,retain) NSString * contactIdentifier;                                           //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasPicture;                                                        //@synthesize hasPicture=_hasPicture - In the implementation block
@property (nonatomic,retain) NSString * classifiedPersonLocalIdentifierWithFaceModelID;              //@synthesize classifiedPersonLocalIdentifierWithFaceModelID=_classifiedPersonLocalIdentifierWithFaceModelID - In the implementation block
@property (assign,nonatomic) double updateTimestamp;                                                 //@synthesize updateTimestamp=_updateTimestamp - In the implementation block
-(id)description;
-(id)init;
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(double)updateTimestamp;
-(void)setUpdateTimestamp:(double)arg1 ;
-(void)setHasPicture:(BOOL)arg1 ;
-(void)setClassifiedPersonLocalIdentifierWithFaceModelID:(NSString *)arg1 ;
-(BOOL)hasPicture;
-(NSString *)classifiedPersonLocalIdentifierWithFaceModelID;
@end
