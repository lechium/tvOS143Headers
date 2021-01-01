/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class SAPersonAttribute, NSString;

@interface SAPhoneIncomingCallSearchResult : SADomainObject

@property (nonatomic,retain) SAPersonAttribute * caller; 
@property (nonatomic,copy) NSString * incomingCallType; 
+(id)incomingCallSearchResult;
+(id)incomingCallSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAPersonAttribute *)caller;
-(void)setCaller:(SAPersonAttribute *)arg1 ;
-(id)encodedClassName;
-(NSString *)incomingCallType;
-(void)setIncomingCallType:(NSString *)arg1 ;
@end
