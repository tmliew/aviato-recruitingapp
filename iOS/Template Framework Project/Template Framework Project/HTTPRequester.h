//
//  HTTPRequester.h
//  
//
//  Created by Tim Liew on 1/9/17.
//
//

#import <Foundation/Foundation.h>

@interface HTTPRequester : NSObject <NSURLConnectionDataDelegate>

- (void)sendHttpPost:(NSDictionary *)postDict withID:(NSString *)currentID;
- (void)sendHttpPostPicture:(UIImage *)imageToPost withID:(NSString *)currentID;
- (int)httpPostCandidate:(NSDictionary *)postDict withImage:(UIImage *)imageToPost withID:(NSString *)currentID;

@end
