/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSString;

@interface UMLogMessage : NSObject {

	NSMutableArray* _publicStrings;
	NSMutableArray* _privateStrings;

}

@property (nonatomic,retain) NSMutableArray * publicStrings;               //@synthesize publicStrings=_publicStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * privateStrings;              //@synthesize privateStrings=_privateStrings - In the implementation block
@property (nonatomic,readonly) NSString * publicString; 
@property (nonatomic,readonly) NSString * privateString; 
+(id)messageWithPublicFormat:(id)arg1 ;
+(id)messageWithUser:(id)arg1 publicFormat:(id)arg2 ;
+(id)messageWithPublicFormat:(id)arg1 arguments:(char*)arg2 ;
+(id)messageWithPrivateFormat:(id)arg1 arguments:(char*)arg2 ;
+(void)_addUserInfoFrom:(id)arg1 toMessage:(id)arg2 ;
+(void)_addTaskInfoFrom:(id)arg1 toMessage:(id)arg2 ;
+(id)messageWithPrivateFormat:(id)arg1 ;
+(id)messageWithUser:(id)arg1 ;
+(id)messageWithUser:(id)arg1 privateFormat:(id)arg2 ;
+(id)messageWithTask:(id)arg1 ;
+(id)messageWithTask:(id)arg1 publicFormat:(id)arg2 ;
+(id)messageWithTask:(id)arg1 privateFormat:(id)arg2 ;
-(id)init;
-(void)addPrivateFormat:(id)arg1 ;
-(NSString *)publicString;
-(NSString *)privateString;
-(NSMutableArray *)publicStrings;
-(NSMutableArray *)privateStrings;
-(void)addPublicFormat:(id)arg1 ;
-(id)_stringForArray:(id)arg1 ;
-(void)setPublicStrings:(NSMutableArray *)arg1 ;
-(void)setPrivateStrings:(NSMutableArray *)arg1 ;
@end

