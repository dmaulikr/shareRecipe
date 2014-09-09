//
//  LoginViewController.h
//  ShareRecipe
//
//  Created by Jong Yun Lee on 9/8/14.
//  Copyright (c) 2014 HeapStack. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface LoginViewController : UIViewController {
    AppDelegate *appDelegate;
}
@property (strong, nonatomic) IBOutlet UITextField *email;
@property (strong, nonatomic) IBOutlet UITextField *password;

- (IBAction)login:(id)sender;
@end
