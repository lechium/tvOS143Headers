/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSXPCCoding.h>

@class FBSSceneMessage, NSString;

@interface FBSWorkspaceResponse : NSObject <BSXPCCoding> {

	FBSSceneMessage* _message;

}

@property (nonatomic,copy) FBSSceneMessage * message;               //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(FBSSceneMessage *)message;
-(void)setMessage:(FBSSceneMessage *)arg1 ;
@end

